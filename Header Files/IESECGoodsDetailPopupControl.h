//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailPopupControl : MTLModel <MTLJSONSerializing> {
    BOOL _skipClose;
    NSString *_popupURL;
    NSString *_jumpURL;
    NSString *_popupKey;
}

@property (copy, nonatomic) NSString *popupURL;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *popupKey;
@property (nonatomic) BOOL skipClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setJumpURL:(id)arg0;
- (id)jumpURL;
- (id)popupKey;
- (void)setPopupKey:(id)arg0;
- (id)popupURL;
- (void)setPopupURL:(id)arg0;
- (BOOL)skipClose;
- (void)setSkipClose:(BOOL)arg0;
- (void).cxx_destruct;

@end