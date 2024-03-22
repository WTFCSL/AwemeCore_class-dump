//
//     Generated by private class-dump
//

@class NSString;
@protocol SECInterestLogContent;

@interface SECInterestLogItem : NSObject {
    NSString *_type;
    id<SECInterestLogContent> _content;
    double _timestamp;
}

@property (copy, nonatomic) id<SECInterestLogContent> content;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double timestamp;

- (id)initWithContent:(id)arg0 type:(id)arg1 timestamp:(double)arg2;
- (id)initWithContent:(id)arg0 type:(id)arg1;
- (double)timestamp;
- (id)logDescription;
- (void).cxx_destruct;
- (id)type;
- (id)content;
- (void)submit;
- (void)setType:(id)arg0;
- (void)setContent:(id)arg0;
- (void)setTimestamp:(double)arg0;

@end
