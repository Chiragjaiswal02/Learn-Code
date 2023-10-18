#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

struct Location {
    std::string name;
    double latitude;
    double longitude;
};

// Function to calculate Haversine distance
double haversine(const Location& loc1, const Location& loc2) {
    const double R = 6371.0; // Earth's radius in kilometers

    // Converting latitude and longitude into radian
    double lat1 = loc1.latitude * M_PI / 180.0;
    double lon1 = loc1.longitude * M_PI / 180.0;
    double lat2 = loc2.latitude * M_PI / 180.0;
    double lon2 = loc2.longitude * M_PI / 180.0;

    double dlon = lon2 - lon1;
    double dlat = lat2 - lat1;

    double a = std::sin(dlat / 2) * std::sin(dlat / 2) +
               std::cos(lat1) * std::cos(lat2) * std::sin(dlon / 2) * std::sin(dlon / 2);
               
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));
    double distance = R * c;

    return distance;
}

int main() {
    std::ifstream inputFile("world_country_and_usa_states_latitude_and_longitude_values.csv");
    std::vector<Location> locations;

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input file." << std::endl;
        return 1;
    }

    // Read location data from the CSV file
    while (inputFile.good()) {
        Location loc;
        std::getline(inputFile, loc.name, ',');
        inputFile >> loc.latitude;
        inputFile.ignore(1, ','); // Ignore the comma
        inputFile >> loc.longitude;
        inputFile.ignore(1, '\n'); // Ignore the newline
        locations.push_back(loc);
    }

    // Specify the latitude radius in degrees
    double latitudeRadius = 1110.0;

    // Initialize clusters
    std::vector<std::vector<std::string>> clusters;
    std::vector<bool> clustered(locations.size(), false);

    for (size_t i = 0; i < locations.size(); ++i) {
        if (!clustered[i]) {
            std::vector<std::string> cluster;
            cluster.push_back(locations[i].name);
            clustered[i] = true;

            for (size_t j = i + 1; j < locations.size(); ++j) {
                if (!clustered[j] && haversine(locations[i], locations[j]) <= latitudeRadius) {
                    cluster.push_back(locations[j].name);
                    clustered[j] = true;
                }
            }
            clusters.push_back(cluster);
        }
    }

    // Print the clusters
    int clusterNum = 1;
    for (const auto& cluster : clusters) {
        std::cout << "Cluster " << clusterNum++ << ": ";
        for (std::string idx : cluster) {
            std::cout << idx  << " ";
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }

    inputFile.close();
    return 0;
}
