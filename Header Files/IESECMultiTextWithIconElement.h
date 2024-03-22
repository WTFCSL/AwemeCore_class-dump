//
//     Generated by private class-dump
//

@class NSArray, IESECActionDefine, NSString;

@interface IESECMultiTextWithIconElement : MTLModel <MTLJSONSerializing> {
    BOOL _isScrollable;
    double _space;
    long long _leadingSpace;
    NSArray *_textWithIconElementList;
    unsigned long long _alignStrategy;
    IESECActionDefine *_action;
}

@property (nonatomic) double space;
@property (nonatomic) long long leadingSpace;
@property (copy, nonatomic) NSArray *textWithIconElementList;
@property (nonatomic) BOOL isScrollable;
@property (nonatomic) unsigned long long alignStrategy;
@property (retain, nonatomic) IESECActionDefine *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textWithIconElementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)textWithIconElementList;
- (void)setTextWithIconElementList:(id)arg0;
- (unsigned long long)alignStrategy;
- (void)setAlignStrategy:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setAction:(id)arg0;
- (id)action;
- (double)space;
- (long long)leadingSpace;
- (void)setLeadingSpace:(long long)arg0;
- (BOOL)isScrollable;
- (void)setIsScrollable:(BOOL)arg0;
- (void)setSpace:(double)arg0;

@end