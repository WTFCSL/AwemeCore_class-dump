//
//     Generated by private class-dump
//

@class NSString;
@protocol BDWebDefaultRequestDecoratorDelegate;

@interface BDWebDefaultRequestDecorator : NSObject <BDWebRequestDecorator>

@property (class, weak, nonatomic) id<BDWebDefaultRequestDecoratorDelegate> delegate;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegate;
+ (void)setDelegate:(id)arg0;

- (id)bdw_decorateRequest:(id)arg0;

@end