//
//     Generated by private class-dump
//

@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AWEDCFeedCellActionInfoViewModel : AWEDCFeedBaseCellElementViewModel {
    id<AWEAwemePlayInteractionInteractorProtocol> _interactor;
}

@property (retain, nonatomic) id<AWEAwemePlayInteractionInteractorProtocol> interactor;

- (id)enterFrom;
- (void)refreshWithAwemeModel:(id)arg0;
- (void)didTapUserInfo;
- (void)didTapDiggButton;
- (id)interactor;
- (void).cxx_destruct;
- (void)setInteractor:(id)arg0;

@end
