# fenwick-tree
A C implementation of Fenwick Trees. Fenwick trees are a great data structure for handling operations on prefixes of sequences. This particular version implements prefix sums ans updates. Both operations take `O(lg N)` time in the worst case where `N` is the length of the sequence.

# API
* `inc(pos, delta)`: increment prefix [1..pos] of sequence by delta
* `get(pos)`: get sum of prefix [1..pos] of sequence
