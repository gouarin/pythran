#ifndef PYTHONIC_FILE_READ_HPP
#define PYTHONIC_FILE_READ_HPP

#include "pythonic/utils/proxy.hpp"
#include "pythonic/types/file.hpp"

namespace pythonic { namespace __builtin__  {

    namespace file {
        types::str read(types::file &f, int size = -1){return f.read(size);}
        types::str read(types::file &&f, int size = -1){return f.read(size);}
        PROXY(pythonic::__builtin__::file, read);

    }

}

}
#endif

