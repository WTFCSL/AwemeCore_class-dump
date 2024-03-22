//
//     Generated by private class-dump
//

@class HTSLiveUser, IESLiveMicPosTagInfo, NSString, NSArray, IESLiveUserHighScoreSongTag;

@protocol IESLiveLinkmicTagCombined <NSObject>

@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) IESLiveMicPosTagInfo *mixOperation;
@property (retain, nonatomic) IESLiveUserHighScoreSongTag *highScoreSong;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSArray *tagsArray;

- (id)tagsArray;
- (void)setTagsArray:(id)arg0;
- (id)mixOperation;
- (id)highScoreSong;
- (void)setMixOperation:(id)arg0;
- (void)setHighScoreSong:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (id)location;
- (void)setLocation:(id)arg0;

@end