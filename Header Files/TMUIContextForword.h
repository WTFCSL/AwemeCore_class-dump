//
//     Generated by private class-dump
//

@protocol TMTrackerDelagate;

@interface TMUIContextForword : NSObject {
    id<TMTrackerDelagate> _delegate;
}

@property (weak, nonatomic) id<TMTrackerDelagate> delegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end