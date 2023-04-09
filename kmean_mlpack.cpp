#include <iostream>
#include <mlpack/core.hpp>
#include <mlpack/methods/kmeans/kmeans.hpp>
#include <mlpack/core/data/load.hpp>

using namespace mlpack;
using namespace mlpack::kmeans;

int main()
{
    // Load the inbuilt dataset (Old Faithful dataset).
    arma::mat dataset;
    data::Load("http://www.mlpack.org/datasets/old_faithful/faithful.csv", dataset, true);

    // Number of clusters.
    size_t k = 2;

    // K-means clustering algorithm.
    KMeans<> kmeans;
    arma::Row<size_t> assignments; // Cluster assignments.
    arma::mat centroids; // Cluster centroids.

    // Run K-means clustering.
    kmeans.Cluster(dataset, k, assignments, centroids);

    // Print the cluster assignments and centroids.
    std::cout << "Cluster assignments:\n" << assignments << std::endl;
    std::cout << "Cluster centroids:\n" << centroids << std::endl;

    return 0;
}
