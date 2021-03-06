/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface _SBFVibrantSettings : NSObject {
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
    UIColor *_highlightLimitingColor;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_referenceColor;
    float _referenceContrast;
    UIColor *_shimmerColor;
    int _style;
    UIColor *_tintColor;
}

@property (nonatomic, retain) UIColor *chevronShimmerColor;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIColor *highlightLimitingColor;
@property (nonatomic, readonly, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly, retain) UIColor *referenceColor;
@property (nonatomic, readonly) float referenceContrast;
@property (nonatomic, retain) UIColor *shimmerColor;
@property (nonatomic, readonly) int style;
@property (nonatomic, retain) UIColor *tintColor;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3;

- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(float)arg2;
- (int)_style;
- (id)chevronShimmerColor;
- (void)dealloc;
- (unsigned int)hash;
- (id)highlightColor;
- (id)highlightLimitingColor;
- (id)highlightLimitingViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)legibilitySettings;
- (id)referenceColor;
- (float)referenceContrast;
- (void)setChevronShimmerColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightLimitingColor:(id)arg1;
- (void)setShimmerColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)shimmerColor;
- (int)style;
- (id)tintColor;
- (id)tintViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
