//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface IESECCouponButtonSplitLineConfig : MTLModel <MTLJSONSerializing> {
    NSString *_splitLineColor;
    NSNumber *_splitLineHeight;
    unsigned long long _splitLineType;
}

@property (retain, nonatomic) NSString *splitLineColor;
@property (retain, nonatomic) NSNumber *splitLineHeight;
@property (nonatomic) unsigned long long splitLineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSplitLineColor:(id)arg0;
- (id)splitLineColor;
- (id)splitLineHeight;
- (unsigned long long)splitLineType;
- (void)setSplitLineHeight:(id)arg0;
- (void)setSplitLineType:(unsigned long long)arg0;
- (void).cxx_destruct;

@end
