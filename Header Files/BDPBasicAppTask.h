//
//     Generated by private class-dump
//

@class BDPAppPageURL, BDPUniqueID;

@interface BDPBasicAppTask : NSObject {
    BOOL _showGoHomeButton;
    BDPAppPageURL *_currentPage;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) BDPAppPageURL *currentPage;
@property (nonatomic) BOOL showGoHomeButton;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (BOOL)showGoHomeButton;
- (void)setShowGoHomeButton:(BOOL)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)currentContext;
- (void)setCurrentPage:(id)arg0;
- (void)setUniqueID:(id)arg0;
- (id)currentPage;
- (id)initWithUniqueID:(id)arg0;

@end