//
//     Generated by private class-dump
//

@protocol IESLiveNewDressResourceLoadDelegate;

@protocol IESLiveNewDressResourceLoadProcessor <NSObject>

+ (int)dressType;

@property (weak, nonatomic) id<IESLiveNewDressResourceLoadDelegate> delegate;

- (BOOL)loadDressResource:(id)arg0 error:(id *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
