//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLivePublicScreenFixedCardItem : NSObject <IESECLivePublicScreenFixedCardItem> {
    double preferredDuration;
    NSString *cardName;
    id /* block */ shouldDisplay;
    id /* block */ displayStateDidChage;
}

@property (nonatomic) double preferredDuration;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) id /* block */ shouldDisplay;
@property (copy, nonatomic) id /* block */ displayStateDidChage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisplayStateDidChage:(id /* block */)arg0;
- (id /* block */)displayStateDidChage;
- (id)transferLiveCardItem;
- (void)setPreferredDuration:(double)arg0;
- (void).cxx_destruct;
- (double)preferredDuration;
- (id)cardName;
- (void)setCardName:(id)arg0;
- (id /* block */)shouldDisplay;
- (void)setShouldDisplay:(id /* block */)arg0;

@end
