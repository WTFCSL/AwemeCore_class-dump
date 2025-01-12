//
//     Generated by private class-dump
//

@class NSString, XPlayItem, NSHashTable;

@interface XPlayScreenRecorder : NSObject <XPlayScreenRecordProtocol> {
    XPlayItem *_item;
    NSHashTable *_screenRecordTasks;
}

@property (weak, nonatomic) XPlayItem *item;
@property (retain, nonatomic) NSHashTable *screenRecordTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)screenRecordTasks;
- (id)createTaskWithModel:(id)arg0;
- (void)handleRecordResult:(id)arg0;
- (void)setScreenRecordTasks:(id)arg0;
- (id)item;
- (void).cxx_destruct;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;

@end
