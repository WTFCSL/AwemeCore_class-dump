//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWERLViewReusePool : NSObject {
    NSMutableArray *_pool;
    long long _position;
    long long _resetTicket;
}

@property (retain, nonatomic) NSMutableArray *pool;
@property (nonatomic) long long position;
@property (nonatomic) long long resetTicket;

- (long long)resetTicket;
- (void)setResetTicket:(long long)arg0;
- (id)viewForProps:(id)arg0 containerView:(id)arg1;
- (void)resetWithAnimator:(id)arg0;
- (id)pool;
- (id)init;
- (void).cxx_destruct;
- (long long)position;
- (void)setPosition:(long long)arg0;
- (void)setPool:(id)arg0;

@end
