//
//     Generated by private class-dump
//

@protocol AWETeenRecorderStatusManager <NSObject>

+ (id)sharedInstance;

@property (nonatomic) BOOL isRecorderShowing;
@property (nonatomic) BOOL shouldBackToSource;

- (BOOL)isRecorderShowing;
- (void)setIsRecorderShowing:(BOOL)arg0;
- (BOOL)shouldBackToSource;
- (void)setShouldBackToSource:(BOOL)arg0;

@end
