//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIView, NSNumber;

@interface AWEShareWebMetaCutScreenInfo : MTLModel <MTLJSONSerializing> {
    NSString *_bgURL;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_bgHeight;
    NSNumber *_bgWidth;
    NSNumber *_shootHeight;
    NSNumber *_shootWidth;
    UIView *_cutView;
}

@property (copy, nonatomic) NSString *bgURL;
@property (retain, nonatomic) NSNumber *x;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *bgHeight;
@property (retain, nonatomic) NSNumber *bgWidth;
@property (retain, nonatomic) NSNumber *shootHeight;
@property (retain, nonatomic) NSNumber *shootWidth;
@property (retain, nonatomic) UIView *cutView;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)bgURL;
- (void)setBgURL:(id)arg0;
- (id)cutView;
- (void)setCutView:(id)arg0;
- (id)shootWidth;
- (id)shootHeight;
- (id)bgHeight;
- (void)setBgHeight:(id)arg0;
- (id)bgWidth;
- (void)setBgWidth:(id)arg0;
- (void)setShootHeight:(id)arg0;
- (void)setShootWidth:(id)arg0;
- (void).cxx_destruct;
- (void)setY:(id)arg0;
- (id)y;
- (id)x;
- (void)setX:(id)arg0;

@end