//
//     Generated by private class-dump
//

@class NSString;

@interface RTVInteractionTipsDismissalRequest : NSObject {
    BOOL _animated;
    NSString *_showingIdentifier;
}

@property (readonly, copy, nonatomic) NSString *showingIdentifier;
@property (readonly, nonatomic) BOOL animated;

- (id)initWithShowingIdentifier:(id)arg0;
- (id)showingIdentifier;
- (BOOL)animated;
- (void).cxx_destruct;
- (void)updateAnimated:(BOOL)arg0;

@end
