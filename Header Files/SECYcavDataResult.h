//
//     Generated by private class-dump
//

@class NSString;

@interface SECYcavDataResult : NSObject {
    double _confidence;
    NSString *_dataType;
    NSString *_relatedKeyPath;
    NSString *_comment;
}

@property (nonatomic) double confidence;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *relatedKeyPath;
@property (copy, nonatomic) NSString *comment;

- (id)relatedKeyPath;
- (void)setRelatedKeyPath:(id)arg0;
- (double)confidence;
- (void)setDataType:(id)arg0;
- (void)setConfidence:(double)arg0;
- (void).cxx_destruct;
- (id)dataType;
- (id)comment;
- (void)setComment:(id)arg0;

@end
