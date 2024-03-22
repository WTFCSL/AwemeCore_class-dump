//
//     Generated by private class-dump
//

@class NSString;

@interface AWESendBookCommentRequestModel : NSObject {
    float _rating;
    NSString *_bookID;
    NSString *_text;
    NSString *_replyID;
    NSString *_replyToReplyID;
    long long _channelID;
    NSString *_city;
    long long _timeFromInputToSend;
    long long _timeFromVideoToCmt;
    NSString *_enterFrom;
    NSString *_previousPage;
}

@property (copy, nonatomic) NSString *bookID;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *replyID;
@property (copy, nonatomic) NSString *replyToReplyID;
@property (nonatomic) long long channelID;
@property (copy, nonatomic) NSString *city;
@property (nonatomic) long long timeFromInputToSend;
@property (nonatomic) long long timeFromVideoToCmt;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) float rating;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setBookID:(id)arg0;
- (void)setReplyID:(id)arg0;
- (void)setReplyToReplyID:(id)arg0;
- (id)generateRequestParamsDict;
- (id)replyToReplyID;
- (id)bookID;
- (long long)timeFromInputToSend;
- (long long)timeFromVideoToCmt;
- (void)setTimeFromInputToSend:(long long)arg0;
- (void)setTimeFromVideoToCmt:(long long)arg0;
- (id)city;
- (long long)channelID;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setText:(id)arg0;
- (float)rating;
- (id)text;
- (void)setChannelID:(long long)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setRating:(float)arg0;
- (id)replyID;

@end