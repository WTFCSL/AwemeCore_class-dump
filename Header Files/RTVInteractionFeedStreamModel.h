//
//     Generated by private class-dump
//

@class NSString, AWEListDataController;

@interface RTVInteractionFeedStreamModel : NSObject {
    long long _initialStreamType;
    AWEListDataController *_initialDataController;
    NSString *_initialItemID;
}

@property (readonly, nonatomic) long long initialStreamType;
@property (readonly, nonatomic) AWEListDataController *initialDataController;
@property (readonly, nonatomic) NSString *initialItemID;

- (id)initialItemID;
- (id)initWithStreamType:(long long)arg0 dataController:(id)arg1 itemID:(id)arg2;
- (long long)initialStreamType;
- (id)initialDataController;
- (void).cxx_destruct;

@end