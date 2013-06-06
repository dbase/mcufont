// Utility functions for processing imported font files.

#pragma once
#include "datafile.hh"

// Find and eliminate any duplicate glyphs by appending their char vectors.
void eliminate_duplicates(std::vector<DataFile::glyphentry_t> &glyphtable);

// Calculate the maximum bounding box of the glyphs and crop them to that.
// Adjust fontinfo accordingly.
void crop_glyphs(std::vector<DataFile::glyphentry_t> &glyphtable,
                 DataFile::fontinfo_t &fontinfo);
