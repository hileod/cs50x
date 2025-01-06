# 定义编译器和选项
CC = cc
CFLAGS = -Wall -g
LDFLAGS = -L/usr/local/lib
LIBS = -lcs50

# 目标文件夹
SRC_DIR = src

# 自动查找源文件夹中的所有 .c 文件
SRCS = $(wildcard $(SRC_DIR)/*.c)

# 从源文件生成目标文件（将 .c 转为目标文件名）
TARGETS = $(patsubst $(SRC_DIR)/%.c,%,$(SRCS))

# 默认目标
all: $(TARGETS)

# 编译规则：自动从 .c 文件生成目标文件
%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS) $(LIBS)

# 清理规则
clean:
	rm -f $(TARGETS)

