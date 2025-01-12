//
//     Generated by private class-dump
//

@class CKDDDataIterator;
@protocol CKDDData;

@interface CKDDExeContext : NSObject {
    BOOL _iterated;
    id<CKDDData> _mutableData;
    id<CKDDData> _data;
    id /* block */ _asyncProcessBlock;
    id /* block */ _actionsProvider;
    CKDDDataIterator *_dataIterator;
    id /* block */ _mutableDataCreator;
}

@property (copy, nonatomic) id /* block */ asyncProcessBlock;
@property (copy, nonatomic) id /* block */ actionsProvider;
@property (retain, nonatomic) CKDDDataIterator *dataIterator;
@property (copy, nonatomic) id /* block */ mutableDataCreator;
@property (nonatomic) BOOL iterated;
@property (readonly, nonatomic) id<CKDDData> data;
@property (readonly, nonatomic) id<CKDDData> mutableData;

- (id /* block */)asyncProcessBlock;
- (id)otherActions:(id)arg0;
- (id /* block */)mutableDataCreator;
- (id)initWith:(id)arg0 actionsProvider:(id /* block */)arg1 asyncProcess:(id /* block */)arg2;
- (void)asyncProcess:(id /* block */)arg0;
- (void)setAsyncProcessBlock:(id /* block */)arg0;
- (id)dataIterator;
- (void)setDataIterator:(id)arg0;
- (void)setMutableDataCreator:(id /* block */)arg0;
- (BOOL)iterated;
- (void)setIterated:(BOOL)arg0;
- (id)data;
- (void).cxx_destruct;
- (id /* block */)actionsProvider;
- (void)setActionsProvider:(id /* block */)arg0;
- (id)mutableData;

@end
