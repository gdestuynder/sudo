/*
 * SPDX-License-Identifier: ISC
 *
 * Copyright (c) 2023 Todd C. Miller <Todd.Miller@sudo.ws>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef SUDOERS_PIVOT_H
#define SUDOERS_PIVOT_H

#define SUDOERS_PIVOT_INITIALIZER { -1, -1 }

struct sudoers_pivot {
    int saved_root;
    int saved_cwd;
};
typedef struct sudoers_pivot sudoers_pivot_t;

bool pivot_root(const char *new_root, sudoers_pivot_t cookie);
bool unpivot_root(sudoers_pivot_t cookie);
int  pivot_get_root(sudoers_pivot_t cookie);
int  pivot_get_cwd(sudoers_pivot_t cookie);

#endif /* SUDOERS_PIVOT_H */
