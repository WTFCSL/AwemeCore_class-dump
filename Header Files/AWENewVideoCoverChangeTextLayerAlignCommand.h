//
//     Generated by private class-dump
//

@interface AWENewVideoCoverChangeTextLayerAlignCommand : AWENewVideoCoverCommand {
    long long _originAWEStoryTextAlignmentStyle;
    long long _nowAWEStoryTextAlignmentStyle;
}

@property (nonatomic) long long originAWEStoryTextAlignmentStyle;
@property (nonatomic) long long nowAWEStoryTextAlignmentStyle;

- (void)realExecute;
- (void)realUnExecute;
- (void)setOriginAWEStoryTextAlignmentStyle:(long long)arg0;
- (long long)nowAWEStoryTextAlignmentStyle;
- (long long)originAWEStoryTextAlignmentStyle;
- (void)setNowAWEStoryTextAlignmentStyle:(long long)arg0;

@end