//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWECommerceActivityInfoBottomBarModel : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSNumber *_showSecond;
}

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *showSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)showSecond;
- (void)setShowSecond:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end