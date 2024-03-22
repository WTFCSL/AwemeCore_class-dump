//
//     Generated by private class-dump
//

@class AWELocalMomentNotesInfo, NSMutableDictionary, NSString;

@interface AFDMomentNotesDataHandler : AFDMomentColorRingTableDataHandler <AWEUserMessage, AFDMomentNotesDataHandlerProtocol> {
    NSMutableDictionary *_notesAwemeMap;
    AWELocalMomentNotesInfo *_draftNotesInfo;
}

@property (retain, nonatomic) AWELocalMomentNotesInfo *draftNotesInfo;
@property (retain, nonatomic) NSMutableDictionary *notesAwemeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLogin;
- (id)getMomentNotesInfoWithUid:(id)arg0;
- (id)notesAwemeMap;
- (BOOL)isHaveNotes;
- (void)updateMomentNotesInfo:(id)arg0 withUid:(id)arg1;
- (void)setNotesAwemeMap:(id)arg0;
- (BOOL)updateUser:(id)arg0 withNewUser:(id)arg1;
- (void)didDeleteMoment:(id)arg0 withUserID:(id)arg1;
- (void)didAppendMomentWithPublishModel:(id)arg0;
- (void)didFinishPublishMomentWithPublishModel:(id)arg0 isSuccess:(BOOL)arg1;
- (void)handleDiggNotification:(id)arg0;
- (void)setDraftNotesInfo:(id)arg0;
- (id)draftNotesInfo;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
