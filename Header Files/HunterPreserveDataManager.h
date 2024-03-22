//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, UIView, NSMutableArray;
@protocol HunterPreserveDataDelegate, HunterContainerProtocol;

@interface HunterPreserveDataManager : NSObject <HunterPreserveDataManagerProtocol> {
    id<HunterPreserveDataDelegate> _delegate;
    NSMutableArray *_identifiers;
    unsigned long long _getDataType;
    NSMutableDictionary *_preservedData;
    UIView<HunterContainerProtocol> *_hunterContainer;
}

@property (retain, nonatomic) NSMutableDictionary *preservedData;
@property (weak, nonatomic) UIView<HunterContainerProtocol> *hunterContainer;
@property (retain, nonatomic) NSMutableArray *identifiers;
@property (weak, nonatomic) id<HunterPreserveDataDelegate> delegate;
@property (nonatomic) unsigned long long getDataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preserveData;
- (void)setPreserveData:(id)arg0;
- (void)setGetDataType:(unsigned long long)arg0;
- (id)preservedData;
- (void)setPreservedData:(id)arg0;
- (void)__addObserveForPreserveData;
- (id)hunterContainer;
- (void)setHunterContainer:(id)arg0;
- (id)init;
- (id)identifiers;
- (void).cxx_destruct;
- (void)setIdentifiers:(id)arg0;
- (id)delegate;
- (void)updateContainer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (unsigned long long)getDataType;

@end
