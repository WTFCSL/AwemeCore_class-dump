//
//     Generated by private class-dump
//

@protocol AWETabMallVisibleDelegate;

@interface AWETabMallVisibleRegisterBox : NSObject {
    id<AWETabMallVisibleDelegate> _delegate;
}

@property (weak, nonatomic) id<AWETabMallVisibleDelegate> delegate;

+ (id)boxWithModel:(id)arg0;

- (void).cxx_destruct;
- (id)delegate;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (void)setDelegate:(id)arg0;

@end
