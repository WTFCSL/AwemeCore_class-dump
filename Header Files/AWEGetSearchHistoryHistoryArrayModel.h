//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGetSearchHistoryHistoryArrayModel : IESLiveBridgeModel {
    NSString *_timeStamp;
    NSString *_type;
    NSString *_word;
    NSString *_wordReason;
}

@property (copy, nonatomic) NSString *timeStamp;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordReason;

+ (id)modelCustomPropertyMapper;

- (id)wordReason;
- (void)setWordReason:(id)arg0;
- (void).cxx_destruct;
- (id)timeStamp;
- (id)type;
- (void)setType:(id)arg0;
- (void)setTimeStamp:(id)arg0;
- (id)word;
- (void)setWord:(id)arg0;

@end
