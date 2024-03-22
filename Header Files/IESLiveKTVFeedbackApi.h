//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveKTVFeedbackApi : HTSLiveApi <IESLiveInteractFeedbackAPI> {
    NSNumber *_roomID;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomID:(id)arg0;
- (void)fetchFeedbackCategoriesAtScene:(unsigned long long)arg0 extraParams:(id)arg1 callback:(id /* block */)arg2;
- (id)apiRequestByPath:(id)arg0 callback:(id /* block */)arg1;
- (void)uploadFeedbackWithParams:(id)arg0 completion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end