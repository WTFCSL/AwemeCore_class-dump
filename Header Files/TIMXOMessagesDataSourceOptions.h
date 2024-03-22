//
//     Generated by private class-dump
//

@class NSNumber, TIMXRange;

@interface TIMXOMessagesDataSourceOptions : NSObject {
    id /* block */ _shouldIncludeMessageFilter;
    NSNumber *_initialMessageCount;
    NSNumber *_messageCountPerPage;
    TIMXRange *_displayRange;
}

@property (copy, nonatomic) id /* block */ shouldIncludeMessageFilter;
@property (retain, nonatomic) NSNumber *initialMessageCount;
@property (retain, nonatomic) NSNumber *messageCountPerPage;
@property (retain, nonatomic) TIMXRange *displayRange;

- (id)initialMessageCount;
- (void)setInitialMessageCount:(id)arg0;
- (id)messageCountPerPage;
- (void)setMessageCountPerPage:(id)arg0;
- (id /* block */)shouldIncludeMessageFilter;
- (void)setShouldIncludeMessageFilter:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setDisplayRange:(id)arg0;
- (id)displayRange;

@end
