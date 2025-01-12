//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AFDBookInfoDetailModel : AWEBaseApiModel {
    NSNumber *_bookID;
    NSString *_bookCover;
    NSString *_bookTitle;
    NSString *_score;
    NSString *_authorName;
    NSString *_publisher;
    NSString *_bookDesc;
    NSNumber *_msgType;
    NSString *_msgContent;
}

@property (copy, nonatomic) NSNumber *bookID;
@property (copy, nonatomic) NSString *bookCover;
@property (copy, nonatomic) NSString *bookTitle;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *bookDesc;
@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSString *msgContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBookID:(id)arg0;
- (id)msgContent;
- (void)setMsgContent:(id)arg0;
- (id)bookCover;
- (id)bookDesc;
- (id)bookID;
- (void)setBookCover:(id)arg0;
- (void)setBookDesc:(id)arg0;
- (id)publisher;
- (void)setScore:(id)arg0;
- (id)score;
- (void)setPublisher:(id)arg0;
- (void).cxx_destruct;
- (id)authorName;
- (void)setAuthorName:(id)arg0;
- (id)msgType;
- (void)setMsgType:(id)arg0;
- (id)bookTitle;
- (void)setBookTitle:(id)arg0;

@end
