//
//     Generated by private class-dump
//

@class AFDVideoCachePersistencyController;

@interface AFDFriendsFeedVideoCacheController : NSObject {
    AFDVideoCachePersistencyController *_persistencyController;
}

@property (class, readonly, nonatomic) AFDFriendsFeedVideoCacheController *sharedInstance;

@property (retain, nonatomic) AFDVideoCachePersistencyController *persistencyController;

+ (id)sharedInstance;

- (id)persistencyController;
- (void)persistVideoCacheWithURLKey:(id)arg0;
- (void)setPersistencyController:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end