//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol IESLiveSelfDisciplineRouter;

@interface IESLiveSelfDisciplineFanTicketStore : IESLiveBaseFanTicketStore <IESLiveSelfDisciplineLifeCycle> {
    id<IESLiveSelfDisciplineRouter> _disciplineRouter;
    NSArray *_guestList;
}

@property (weak, nonatomic) id<IESLiveSelfDisciplineRouter> disciplineRouter;
@property (copy, nonatomic) NSArray *guestList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selfDisciplineDidStart:(BOOL)arg0;
- (void)selfDisciplineDidFinish;
- (id)disciplineRouter;
- (void)setDisciplineRouter:(id)arg0;
- (void)setGuestList:(id)arg0;
- (id)guestList;
- (void)bizStoreMount;
- (void)bizStoreDidUpdatedGuestList:(id)arg0;
- (void)updateFanticket;
- (void).cxx_destruct;

@end