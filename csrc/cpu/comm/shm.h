// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0

// DeepSpeed Team

#ifndef __SHM_COLLECTIVES__
#define __SHM_COLLECTIVES__
#if defined(__x86_64__)
#define VECTOR_LENGTH_IN_BYTES 32
#elif defined(__powerpc__)
#define VECTOR_LENGTH_IN_BYTES 16
#endif
void shm_initialize(int size, int rank, char* addr_string, char* port_string);
void all_reduce_outer_loop(torch::Tensor& data, size_t numel, int data_size);
void barrier_wait(int root_idx, int num_ranks);
#endif
