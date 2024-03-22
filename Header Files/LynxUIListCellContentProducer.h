//
//     Generated by private class-dump
//

@class LynxUIContext;

@interface LynxUIListCellContentProducer : NSObject {
    BOOL _needsInternalCellAppearNotification;
    BOOL _needsInternalCellDisappearNotification;
    BOOL _needsInternalCellPrepareForReuseNotification;
    long long _sign;
    LynxUIContext *_UIContext;
    unsigned long long _operationIDCount;
}

@property (weak, nonatomic) LynxUIContext *UIContext;
@property (readonly, nonatomic) void *listNode;
@property (nonatomic) unsigned long long operationIDCount;
@property (nonatomic) long long sign;
@property (nonatomic) BOOL needsInternalCellAppearNotification;
@property (nonatomic) BOOL needsInternalCellDisappearNotification;
@property (nonatomic) BOOL needsInternalCellPrepareForReuseNotification;

- (long long)sign;
- (void)setSign:(long long)arg0;
- (void *)listNode;
- (unsigned long long)operationIDCount;
- (void)setOperationIDCount:(unsigned long long)arg0;
- (void)asyncRecycleLynxUI:(id)arg0;
- (long long)generateOperationId;
- (void)asyncUIAtIndexPath:(long long)arg0 operationID:(long long)arg1;
- (void)recycleLynxUI:(id)arg0;
- (BOOL)needsInternalCellPrepareForReuseNotification;
- (BOOL)needsInternalCellAppearNotification;
- (BOOL)needsInternalCellDisappearNotification;
- (void)recycleCell:(id)arg0;
- (id)listView:(id)arg0 cellForItemAtIndex:(long long)arg1;
- (id)listView:(id)arg0 updateCell:(id)arg1 toItemAtIndex:(long long)arg2;
- (void)setUIContext:(id)arg0;
- (void)setNeedsInternalCellAppearNotification:(BOOL)arg0;
- (void)setNeedsInternalCellDisappearNotification:(BOOL)arg0;
- (void)setNeedsInternalCellPrepareForReuseNotification:(BOOL)arg0;
- (id)uiAtIndex:(long long)arg0;
- (void)asyncClearCellContent:(id)arg0;
- (void)clearCellContent:(id)arg0;
- (void)listView:(id)arg0 enqueueCell:(id)arg1;
- (id)UIContext;
- (void).cxx_destruct;

@end