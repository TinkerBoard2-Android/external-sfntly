/*
 * Copyright 2011 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SFNTLY_CPP_SRC_SFNTLY_TOOLS_SUBSETTER_TABLE_SUBSETTER_IMPL_H_
#define SFNTLY_CPP_SRC_SFNTLY_TOOLS_SUBSETTER_TABLE_SUBSETTER_IMPL_H_

#include "sfntly/tools/subsetter/table_subsetter.h"

namespace sfntly {

class TableSubsetterImpl : public TableSubsetter {
 public:
  TableSubsetterImpl(const int32_t* tags, size_t tags_length);
  virtual ~TableSubsetterImpl();
  virtual bool TagHandled(int32_t tag);
  virtual std::set<int32_t>* TagsHandled();

 protected:
  std::set<int32_t> tags_;
};

}  // namespace sfntly

#endif  // SFNTLY_CPP_SRC_SFNTLY_TOOLS_SUBSETTER_TABLE_SUBSETTER_IMPL_H_
