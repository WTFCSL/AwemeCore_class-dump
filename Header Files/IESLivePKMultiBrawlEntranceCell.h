//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePKMultiBrawlEntranceCell : UITableViewCell <IESHYHybridViewLifecycleProtocol> {
    UIView<IESHYContainerProtocol> *_multiBrawlInfoView;
}

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *multiBrawlInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMultiBrawlInfoView:(id)arg0;
- (id)multiBrawlInfoView;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateWithInfo:(id)arg0;

@end
