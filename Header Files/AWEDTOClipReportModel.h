//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOClipReportModel : MTLModel <MTLJSONSerializing> {
    NSString *_recordLocation;
    long long _countDownType;
    NSString *_countDownByHand;
}

@property (copy, nonatomic) NSString *recordLocation;
@property (nonatomic) long long countDownType;
@property (copy, nonatomic) NSString *countDownByHand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)recordLocation;
- (void)setRecordLocation:(id)arg0;
- (long long)countDownType;
- (void)setCountDownType:(long long)arg0;
- (id)countDownByHand;
- (void)setCountDownByHand:(id)arg0;
- (void).cxx_destruct;

@end
