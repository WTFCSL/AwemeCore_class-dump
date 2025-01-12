//
//     Generated by private class-dump
//

@class NSString, NSNumber, AWEAwemeModel;

@interface AWEProfileDynamicCoverModel : MTLModel <MTLJSONSerializing> {
    AWEAwemeModel *_aweme;
    NSString *_pullText;
    NSNumber *_startTime;
    NSNumber *_endTime;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *pullText;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (id)pullText;
- (void)setPullText:(id)arg0;
- (void)setStartTime:(id)arg0;
- (void).cxx_destruct;
- (id)endTime;
- (id)startTime;
- (void)setEndTime:(id)arg0;

@end
