//
//     Generated by private class-dump
//

@protocol BDXHybridUIEventDispatcher, BDXHybridUIContext;

@interface BDXHybridUI : NSObject {
    id<BDXHybridUIEventDispatcher> _eventDispatcher;
    id<BDXHybridUIContext> _context;
}

@property (weak, nonatomic) id<BDXHybridUIEventDispatcher> eventDispatcher;
@property (weak, nonatomic) id<BDXHybridUIContext> context;

+ (id)tagName;

- (void)layoutDidFinished;
- (void)updateAttribute:(id)arg0 value:(id)arg1 requestReset:(BOOL)arg2;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (id)view;
- (id)createView;
- (id)eventDispatcher;
- (void)setEventDispatcher:(id)arg0;

@end
