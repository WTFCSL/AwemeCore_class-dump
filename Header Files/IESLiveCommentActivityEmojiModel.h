//
//     Generated by private class-dump
//

@class NSString, HTSLiveImage, NSArray;

@interface IESLiveCommentActivityEmojiModel : NSObject {
    long long _startTime;
    long long _endTime;
    NSString *_idString;
    NSString *_activityName;
    HTSLiveImage *_tagImage;
    NSArray *_emojiArray;
    long long _insertToQuickEmojiNum;
}

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *idString;
@property (copy, nonatomic) NSString *activityName;
@property (retain, nonatomic) HTSLiveImage *tagImage;
@property (copy, nonatomic) NSArray *emojiArray;
@property (nonatomic) long long insertToQuickEmojiNum;

- (id)tagImage;
- (void)setTagImage:(id)arg0;
- (id)emojiArray;
- (void)setEmojiArray:(id)arg0;
- (long long)insertToQuickEmojiNum;
- (void)setInsertToQuickEmojiNum:(long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (long long)startTime;
- (void)setEndTime:(long long)arg0;
- (id)idString;
- (id)activityName;
- (void)setActivityName:(id)arg0;
- (void)setIdString:(id)arg0;

@end