//
//     Generated by private class-dump
//

@class IESLiveMultiInteractList, NSArray, HTSLiveUser;
@protocol IESLiveLinkmicPreStreamUserServiceDelegate;

@interface IESLiveLinkmicPreStreamUserService : NSObject {
    HTSLiveUser *_roomOwner;
    id<IESLiveLinkmicPreStreamUserServiceDelegate> _delegate;
    IESLiveMultiInteractList *_listModel;
    NSArray *_seiArray;
}

@property (retain, nonatomic) IESLiveMultiInteractList *listModel;
@property (copy, nonatomic) NSArray *seiArray;
@property (retain, nonatomic) HTSLiveUser *roomOwner;
@property (weak, nonatomic) id<IESLiveLinkmicPreStreamUserServiceDelegate> delegate;

- (void)setListModel:(id)arg0;
- (void)updateListModel:(id)arg0;
- (BOOL)isEqualToNewList:(id)arg0;
- (void)updateWithGrids:(id)arg0;
- (BOOL)updateSomeoneSpeaking:(id)arg0 talking:(unsigned long long)arg1;
- (id)seiArray;
- (id)pr_logWithArray:(id)arg0;
- (void)setSeiArray:(id)arg0;
- (id)listModel;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)roomOwner;
- (void)setRoomOwner:(id)arg0;

@end
