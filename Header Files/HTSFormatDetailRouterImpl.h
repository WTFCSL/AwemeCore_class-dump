//
//     Generated by private class-dump
//

@class NSNumber, UIViewController, NSString;

@interface HTSFormatDetailRouterImpl : NSObject <HTSFormatDetailRouter> {
    UIViewController *_rootViewController;
    NSNumber *_currentFormatId;
}

@property (weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) NSNumber *currentFormatId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)arg0 formatId:(id)arg1;
- (id)currentFormatId;
- (void)closeCurrentFormatRoomWithType:(unsigned long long)arg0;
- (void)setCurrentFormatId:(id)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (void).cxx_destruct;

@end
