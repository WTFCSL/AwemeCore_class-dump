//
//     Generated by private class-dump
//

@class AWENewVideoCoverCommandStack;

@interface AWENewVideoCoverBatchRevertCommand : AWENewVideoCoverCommand {
    AWENewVideoCoverCommandStack *_commandStack;
}

@property (retain, nonatomic) AWENewVideoCoverCommandStack *commandStack;

- (void)realExecute;
- (void)realUnExecute;
- (id)commandStack;
- (void)setCommandStack:(id)arg0;
- (void).cxx_destruct;

@end
