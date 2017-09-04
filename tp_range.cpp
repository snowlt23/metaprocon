
struct RepIterator {
  int i;
  int step;
  RepIterator(int n, int st) : i(n), step(st) {}
  bool operator ==(const RepIterator& rhs) { return i == rhs.i; }
  bool operator !=(const RepIterator& rhs) { return i >= rhs.i; }
  int operator *() { return i; }
  RepIterator operator ++() { i+=step; return *this; };
};
struct RepLoop {
  int start, end, step;
  RepLoop(int s, int e, int st) : start(s), end(e), step(st) {}
  RepIterator begin() { return RepIterator(s, st); }
  RepIterator end() { return RepIterator(e, st); }
};

RepLoop range(int s, int e, int step) {
  return RepLoop(s, e, step);
}
RepLoop range(int s, int e) {
  return RepLoop(s, e, 1);
}
RepLoop range(int e) {
  return RepLoop(0, e, 1);
}

