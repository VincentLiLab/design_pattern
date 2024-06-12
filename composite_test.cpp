#include <iostream>
#include <memory>

#include "src/composite/leaf.hpp"
#include "src/composite/node.hpp"

int main(int, char *[])
{
  std::cout << "composite test" << std::endl;

  auto node0(std::make_unique<Node>("node", "0"));

  auto leaf0(std::make_unique<Leaf>("leaf", "0"));
  auto leaf1(std::make_unique<Leaf>("leaf", "1"));
  auto leaf2(std::make_unique<Leaf>("leaf", "2"));

  node0->Add(std::move(leaf0));
  node0->Add(std::move(leaf1));
  node0->Add(std::move(leaf2));

  // node0->Print();

  auto node1(std::make_unique<Node>("node", "1"));

  auto leaf3(std::make_unique<Leaf>("leaf", "3"));
  auto leaf4(std::make_unique<Leaf>("leaf", "4"));
  auto leaf5(std::make_unique<Leaf>("leaf", "5"));

  node1->Add(std::move(leaf3));
  node1->Add(std::move(leaf4));
  node1->Add(std::move(leaf5));

  node0->Add(std::move(node1));

  node0->Print();

  return 0;
}