//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHomePageBubbleFactory : NSObject <AWEHomePageBubbleFactoryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getBubbleWithBubbleModel:(id)arg0 targetView:(id)arg1 targetPoint:(struct CGPoint { double x0; double x1; })arg2 position:(unsigned long long)arg3;
- (struct CGSize { double x0; double x1; })getBubbleContentSizeWithContentConfig:(id)arg0;

@end
